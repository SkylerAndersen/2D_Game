using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private float speed;
    [SerializeField] private float defaultOffset;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void LateUpdate()
    {
        Vector3 newPosition = (new Vector3(0f,defaultOffset,-10f)) + target.position;
        transform.position = Vector3.Slerp(transform.position, newPosition, speed * Time.deltaTime);
    }
}
