using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    public GameObject player;
    private Vector3 offset = new Vector3(0, 5, -12);

    // Update is called once per frame
    void LateUpdate()
    {
        // Offset the camera behind
        transform.position = player.transform.position + offset;
    }
}
