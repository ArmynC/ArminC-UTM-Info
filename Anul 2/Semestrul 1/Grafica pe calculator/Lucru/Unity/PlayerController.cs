using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    private float speed = 20.0f;
    private float turnSpeed = 45.0f;
    private float horizontalInput;
    private float forwardInput;

    // Update is called once per frame
    void Update()
    {
        horizontalInput = Input.GetAxis("Horizontal");
        forwardInput = Input.GetAxis("Vertical");

        // Move forward
        transform.Translate(Vector3.forward * Time.deltaTime * speed * forwardInput);

        // Rotate
        transform.Rotate(Vector3.up, horizontalInput * turnSpeed * Time.deltaTime);

        // Slide
        // transform.Translate(Vector3.right * Time.deltaTime * turnSpeed);
    }
}
