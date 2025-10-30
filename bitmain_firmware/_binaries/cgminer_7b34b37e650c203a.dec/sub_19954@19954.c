int __fastcall sub_19954(unsigned int *a1, int a2, const char *a3, unsigned __int8 a4)
{
  unsigned int *v6; // r5
  char *v7; // r0
  unsigned int v8; // r0
  int v9; // r7
  int v10; // r3
  int v11; // r2
  int v12; // r1
  unsigned __int8 v14; // [sp+18h] [bp+18h]

  if ( a3 && *a3 )
  {
    v6 = a1;
    v7 = strchr(a3, 44);
    if ( v7 )
    {
      *v7 = 0;
      v8 = strtol(v7 + 1, 0, 10);
      v9 = v8;
      if ( v8 > 0x270F )
      {
        v14 = a4;
        v10 = (int)a3;
        v11 = v8;
        v12 = 84;
        a1 = v6;
      }
      else
      {
        if ( !strcasecmp(a3, "queue") )
        {
          dword_68824 = v9;
        }
        else if ( !strcasecmp(a3, "scantime") )
        {
          dword_68754 = v9;
        }
        else
        {
          if ( strcasecmp(a3, "expiry") )
          {
            v14 = a4;
            v10 = (int)a3;
            v11 = 0;
            a1 = v6;
            v12 = 83;
            return sub_18AD4(a1, v12, v11, v10, v14);
          }
          dword_68758 = v9;
        }
        v14 = a4;
        v10 = (int)a3;
        v11 = v9;
        a1 = v6;
        v12 = 82;
      }
    }
    else
    {
      v14 = a4;
      v10 = (int)a3;
      v11 = 0;
      v12 = 86;
      a1 = v6;
    }
  }
  else
  {
    v10 = 0;
    v14 = a4;
    v11 = 0;
    v12 = 85;
  }
  return sub_18AD4(a1, v12, v11, v10, v14);
}
