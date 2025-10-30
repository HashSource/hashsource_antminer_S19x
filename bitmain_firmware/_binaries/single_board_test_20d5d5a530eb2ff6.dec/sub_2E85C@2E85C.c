int __fastcall sub_2E85C(const char *a1, int a2, int *a3)
{
  char *v6; // r0
  char *v7; // r6
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r4
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  char v16[48]; // [sp+Ch] [bp-1B0h] BYREF
  char s[128]; // [sp+3Ch] [bp-180h] BYREF
  char v18[92]; // [sp+BCh] [bp-100h] BYREF
  char v19[164]; // [sp+118h] [bp-A4h] BYREF

  memset(s, 0, sizeof(s));
  sprintf(s, "http://%s:%d/api/v1/power", a1, a2);
  v6 = sub_2CF24(s, 1);
  if ( v6 )
  {
    v7 = v6;
    v8 = sub_7AA44(v6, 0, v18);
    v9 = v8;
    if ( v8 )
    {
      if ( sub_7B2D0(v8, "power") )
      {
        v10 = sub_7B604();
        if ( v10 <= 0 )
        {
          sub_1E938(v16, 0x30u);
          printf("%s ", v16);
          v11 = -1;
          printf("%s : IP not found.\n", "get_power_from_server");
          strcpy(byte_617C0C, "IP not found.");
          sub_3CC5C(byte_617C0C, v16);
        }
        else
        {
          v11 = 0;
          *a3 = v10;
        }
      }
      else
      {
        sub_1E938(v16, 0x30u);
        printf("%s ", v16);
        v11 = -1;
        printf("%s : no json object [power] found\n", "get_power_from_server");
        strcpy(byte_617B0C, "no json object [power] found");
        sub_3CC5C(byte_617B0C, v16);
      }
      if ( *(_DWORD *)(v9 + 4) != -1 )
      {
        v12 = (unsigned int *)(v9 + 4);
        __dmb(0xBu);
        do
        {
          v13 = __ldrex(v12);
          v14 = v13 - 1;
        }
        while ( __strex(v14, v12) );
        if ( !v14 )
          sub_7B714(v9);
      }
    }
    else
    {
      sub_1E938(v16, 0x30u);
      printf("%s ", v16);
      v11 = -1;
      printf("%s : JSON decode failed(%d): %s\n", "get_power_from_server", *(_DWORD *)v18, v19);
      snprintf(byte_617A0C, 0x100u, "JSON decode failed(%d): %s", *(_DWORD *)v18, v19);
      sub_3CC5C(byte_617A0C, v16);
    }
    free(v7);
    return v11;
  }
  else
  {
    sub_1E938(v18, 0x30u);
    printf("%s ", v18);
    printf("%s : http get failed\n", "get_power_from_server");
    strcpy(byte_61790C, "http get failed");
    sub_3CC5C(byte_61790C, v18);
    return -1;
  }
}
