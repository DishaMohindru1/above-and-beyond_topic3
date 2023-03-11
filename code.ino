<!DOCTYPE html>
<html>

<head>

  <title>Smart Car Control Panel</title>
  
  
  <style>
    body {
      font-family: Arial, sans-serif;
      margin: 0;
    }

    #login-container {
      display: flex;
      flex-direction: column;
      justify-content: left;
      align-items: right;
      height: 70vh;
      background-color: whitesmoke;
    }

    #login-form {
      display: flex;
      flex-direction: column;
      align-items: left;
      padding: 20px;
      border: 1px solid #ccc;
      border-radius: 5px;
      background-color: #fff;
    }

    #login-form label {
      margin-bottom: 10px;
    }

    #login-form input[type="text"],
    #login-form input[type="password"],
    #login-form input[type="submit"] {
      width: 100%;
      padding: 10px;
      margin-bottom: 10px;
      border-radius: 5px;
      border: 1px solid #ccc;
    }

    #login-form input[type="submit"] {
      background-color: #4CAF50;
      color: #341717;
      cursor: pointer;
    }

    .user-container {
      display: none;
    }
  </style>
  <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>

</head>

<body>


  <div id="login-container">
    <h1>Smart Car Control Panel</h1>
    <form id="login-form">
      <label for="username">Username:</label>
      <input type="text" id="username" name="username">
      <label for="password">Password:</label>
      <input type="password" id="password" name="password">
      <input type="submit" value="Login">
    </form>
  </div>
  <div id="user1-container" class="user-container">
    <h2>User 1 key information</h2>
    <p>Here's information about your smart car:</p>
    <ul>
      <li>Car name : Audi 6</li>
      <li>Owner: Mukesh </li>

      <!-- Add more information specific to User 1 if needed -->
    </ul>

  </div>
  <div id="user2-container" class="user-container">
    <h2>User 2 key information</h2>
    <p>Here's information about your smart car:</p>

    <ul>

      <li>Car name : lamborghini</li>
      <li>Owner: Rahul</li>

      <!-- Add more information specific to User 2 if needed -->
    </ul>
  </div>
  <!-- More user containers if needed -->

</body>

</html>
