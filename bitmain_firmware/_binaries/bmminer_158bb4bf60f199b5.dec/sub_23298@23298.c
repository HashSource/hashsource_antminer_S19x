int sub_23298()
{
  int v0; // r0
  char v1; // r2
  int result; // r0
  int v3; // r2
  char v4[64]; // [sp+0h] [bp-40h] BYREF

  v0 = sub_36C34();
  if ( dword_9C294 )
  {
    switch ( dword_A0D70 )
    {
      case 1:
        memset(v4, 0, sizeof(v4));
        sprintf(v4, "echo %d > %s", 0, "/sys/class/gpio/gpio941/value");
        system(v4);
        memset(v4, 0, sizeof(v4));
        v1 = byte_9C29C;
        goto LABEL_6;
      case 2:
      case 5:
        memset(v4, 0, sizeof(v4));
        sprintf(v4, "echo %d > %s", 0, "/sys/class/gpio/gpio941/value");
        system(v4);
        memset(v4, 0, sizeof(v4));
        sprintf(v4, "echo %d > %s", 1, "/sys/class/gpio/gpio942/value");
        return system(v4);
      case 6:
        memset(v4, 0, sizeof(v4));
        sprintf(v4, "echo %d > %s");
        goto LABEL_9;
      default:
        memset(v4, 0, sizeof(v4));
        byte_9C29C ^= 1u;
        sprintf(v4, "echo %d > %s");
LABEL_9:
        system(v4);
        memset(v4, 0, sizeof(v4));
        sprintf(v4, "echo %d > %s", 0, "/sys/class/gpio/gpio942/value");
        result = system(v4);
        break;
    }
  }
  else if ( v0 )
  {
    if ( v0 == 1 )
    {
      memset(v4, dword_9C294, sizeof(v4));
      v3 = (unsigned __int8)byte_9C29C;
      byte_9C29C ^= 1u;
      sprintf(v4, "echo %d > %s", v3, "/sys/class/gpio/gpio941/value");
    }
    else
    {
      memset(v4, dword_9C294, sizeof(v4));
      sprintf(v4, "echo %d > %s", 0, "/sys/class/gpio/gpio941/value");
    }
    system(v4);
    memset(v4, 0, sizeof(v4));
    v1 = byte_9C29C;
LABEL_6:
    byte_9C29C = v1 ^ 1;
    sprintf(v4, "echo %d > %s");
    return system(v4);
  }
  else
  {
    memset(v4, 0, sizeof(v4));
    sprintf(v4, "echo %d > %s", 1, "/sys/class/gpio/gpio941/value");
    system(v4);
    memset(v4, 0, sizeof(v4));
    sprintf(v4, "echo %d > %s", 0, "/sys/class/gpio/gpio942/value");
    return system(v4);
  }
  return result;
}
