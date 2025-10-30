int __fastcall sub_26CCC(_DWORD *a1)
{
  int v1; // r2
  size_t v2; // r0
  int v4; // r2
  size_t v5; // r0
  char v8[24]; // [sp+14h] [bp-2918h] BYREF
  int v9; // [sp+814h] [bp-2118h] BYREF
  char v10[28]; // [sp+910h] [bp-201Ch] BYREF
  _DWORD *v11; // [sp+2910h] [bp-1Ch]
  _DWORD *v12; // [sp+2914h] [bp-18h]
  void *ptr; // [sp+2918h] [bp-14h]
  int v14; // [sp+291Ch] [bp-10h]
  void *v15; // [sp+2920h] [bp-Ch]
  unsigned __int8 v16; // [sp+2927h] [bp-5h]

  v14 = 0;
  ptr = 0;
  v16 = 0;
  v1 = dword_90DEC++;
  sprintf(
    v10,
    "{\"id\": %d, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}",
    v1,
    (const char *)a1[43],
    (const char *)a1[44]);
  v2 = strlen(v10);
  if ( !sub_2248C((int)a1, v10, v2) )
    return v16;
  while ( 1 )
  {
    ptr = sub_22BC0((int)a1);
    if ( !ptr )
      return v16;
    if ( !sub_26144(a1, (int)ptr) )
      break;
    free(ptr);
  }
  v14 = sub_639D0(ptr, 0, &v9);
  free(ptr);
  v12 = (_DWORD *)sub_652F0(v14, "result");
  v11 = (_DWORD *)sub_652F0(v14, "error");
  if ( v12 && *v12 != 6 && (!v11 || *v11 == 7) )
  {
    v16 = 1;
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      snprintf(v8, 0x800u, "Stratum authorisation success for pool %d", *a1);
      sub_1DB6C(6, v8, 0);
    }
    *((_BYTE *)a1 + 99) = 1;
    byte_866FC = 1;
    if ( dword_94210 )
    {
      v4 = dword_90DEC++;
      sprintf(v10, "{\"id\": %d, \"method\": \"mining.suggest_difficulty\", \"params\": [%d]}", v4, dword_94210);
      v5 = strlen(v10);
      sub_2248C((int)a1, v10, v5);
    }
  }
  else
  {
    if ( v11 )
      v15 = (void *)sub_5F850(v11, 3);
    else
      v15 = strdup("(unknown reason)");
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      snprintf(v8, 0x800u, "pool %d JSON stratum auth failed: %s", *a1, (const char *)v15);
      sub_1DB6C(6, v8, 0);
    }
    free(v15);
    sub_28EB4(a1);
  }
  sub_1F02C(v14);
  return v16;
}
