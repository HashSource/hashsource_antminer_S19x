int __fastcall sub_28F90(_DWORD *a1)
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
    if ( (unsigned __int8)sub_2823C((int)a1) != 1 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      if ( byte_85AA6 )
      {
        v1 = dword_90DEC++;
        v2 = sub_1F2DC(0xE0FF1Fu);
        sprintf(
          v7,
          "{\"id\":%d, \"method\":\"mining.configure\", \"params\":[[\"version-rolling\"],{\"version-rolling.mask\":\"%08"
          "x\",\"version-rolling.min-bit-count\":%d}]}",
          v1,
          v2,
          3);
        a1[162] = 1;
      }
      v3 = strlen(v7);
      if ( sub_22178((int)a1, v7, v3) )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          strcpy(v6, "Failed to send s in initiate_stratum");
          sub_1DB6C(7, v6, 0);
        }
      }
      else if ( !sub_227F0((int)a1, 60) )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          strcpy(v6, "Timed out waiting for response in initiate_stratum");
          sub_1DB6C(7, v6, 0);
        }
      }
      else
      {
        ptr = sub_22BC0((int)a1);
        if ( ptr )
        {
          v12 = 1;
          sub_24E58(a1, (int)ptr);
          free(ptr);
          v13 = 1;
        }
      }
    }
    if ( v13 )
    {
      if ( !a1[144] )
        a1[144] = a1[150];
      *((_BYTE *)a1 + 641) = 1;
      if ( byte_90EF8 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(
          v6,
          0x800u,
          "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
          *a1,
          (const char *)a1[153],
          a1[158]);
        sub_1DB6C(7, v6, 0);
      }
      return v13;
    }
    if ( !v12 || v11 == 1 )
      break;
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v6, "Failed to resume stratum, trying afresh");
      sub_1DB6C(7, v6, 0);
    }
    v11 = 1;
  }
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v6, "Initiate stratum failed");
    sub_1DB6C(7, v6, 0);
  }
  if ( v10 )
    sub_28EB4((int)a1);
  return v13;
}
