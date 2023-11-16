using System;
using System.Data;
using MySql.Data.MySqlClient;
using UnityEngine;

public class DatabaseTest : MonoBehaviour
{
    private MySqlConnection connection;
    private string connectionString = "Server=127.0.0.1;Database=XRTrainer;User ID=testuser;Password=password;";

    void Start()
    {
        Debug.Log("Test Success!");
        connection = new MySqlConnection(connectionString);
        try
        {
            connection.Open();
            Debug.Log("Connected to MySQL Server");

            // Execute a sample query
            ReadDataFromDatabase();
        }
        catch (Exception e)
        {
            Debug.LogError("Error connecting to MySQL Server: " + e.Message);
        }
    }

    void ReadDataFromDatabase()
    {
        string query = "SELECT * FROM users;";
        MySqlCommand cmd = new MySqlCommand(query, connection);

        using (MySqlDataReader reader = cmd.ExecuteReader())
        {
            while (reader.Read())
            {
                // Access data using reader
                int id = reader.GetInt32("TrainerID");
                string name = reader.GetString("Username");

                Debug.Log($"ID: {id}, Name: {name}");
            }
        }
    }

    void OnApplicationQuit()
    {
        if (connection != null && connection.State != ConnectionState.Closed)
        {
            connection.Close();
            Debug.Log("Connection to MySQL Server closed");
        }
    }
}
