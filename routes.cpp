#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    // Extract numbers from JSON payload
    int num1 = input["first"].i();
    int num2 = input["second"].i();

    int result = num1 + num2;

    // Create JSON response
    crow::json::wvalue response;
    response["result"] = result;

    // Return the response
    return crow::response(response);
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    // Extract numbers from JSON payload
    int num1 = input["first"].i();
    int num2 = input["second"].i();

    int result = num1 - num2;

    // Create JSON response
    crow::json::wvalue response;
    response["result"] = result;

    // Return the response
    return crow::response(response);
}