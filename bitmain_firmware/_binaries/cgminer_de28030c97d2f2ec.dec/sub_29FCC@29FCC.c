int __fastcall sub_29FCC(pthread_mutex_t *a1)
{
  int v1; // r4
  unsigned int v2; // r0
  size_t v3; // r0
  char v6[2300]; // [sp+10h] [bp-2914h] BYREF
  char v7[24]; // [sp+90Ch] [bp-2018h] BYREF
  int v8; // [sp+290Ch] [bp-18h]
  void *ptr; // [sp+2910h] [bp-14h]
  char v10; // [sp+2914h] [bp-10h]
  char v11; // [sp+2915h] [bp-Fh]
  char v12; // [sp+2916h] [bp-Eh]
  unsigned __int8 v13; // [sp+2917h] [bp-Dh]

  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  ptr = 0;
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned __int8)sub_2916C((int)a1) != 1 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      if ( byte_86C3E )
      {
        v1 = dword_91F84++;
        v2 = sub_1FBE0(0xE0FF1Fu);
        sprintf(
          v7,
          "{\"id\":%d, \"method\":\"mining.configure\", \"params\":[[\"version-rolling\"],{\"version-rolling.mask\":\"%08"
          "x\",\"version-rolling.min-bit-count\":%d}]}",
          v1,
          v2,
          16);
        a1[27].__nusers = 1;
      }
      v3 = strlen(v7);
      if ( sub_229A4((int)a1, v7, v3) )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v6, "Failed to send s in initiate_stratum");
          sub_1E4EC(7, v6, 0);
        }
      }
      else if ( !sub_23060((int)a1, 60) )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v6, "Timed out waiting for response in initiate_stratum");
          sub_1E4EC(7, v6, 0);
        }
      }
      else
      {
        ptr = sub_23428((int)a1);
        if ( ptr )
        {
          v12 = 1;
          sub_25764(a1, (int)ptr);
          free(ptr);
          v13 = 1;
        }
      }
    }
    if ( v13 )
    {
      if ( !a1[24].__lock )
        a1[24].__lock = a1[25].__nusers;
      a1[27].__size[9] = 1;
      if ( byte_92090 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(
          v6,
          0x800u,
          "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
          a1->__lock,
          (const char *)a1[26].__count,
          a1[27].__lock);
        sub_1E4EC(7, v6, 0);
      }
      return v13;
    }
    if ( !v12 || v11 == 1 )
      break;
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v6, "Failed to resume stratum, trying afresh");
      sub_1E4EC(7, v6, 0);
    }
    v11 = 1;
  }
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v6, "Initiate stratum failed");
    sub_1E4EC(7, v6, 0);
  }
  if ( v10 )
    sub_29EF4(a1);
  return v13;
}
