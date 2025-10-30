int __fastcall sub_27614(pthread_mutex_t *a1)
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
  v1 = dword_91F84++;
  sprintf(
    v10,
    "{\"id\": %d, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}",
    v1,
    (const char *)a1[7].__count,
    (const char *)a1[7].__owner);
  v2 = strlen(v10);
  if ( !sub_22CF8(a1, v10, v2) )
    return v16;
  while ( 1 )
  {
    ptr = sub_23428((int)a1);
    if ( !ptr )
      return v16;
    if ( !sub_26AA0(a1, (int)ptr) )
      break;
    free(ptr);
  }
  v14 = sub_64704(ptr, 0, &v9);
  free(ptr);
  v12 = (_DWORD *)sub_65FEC(v14, "result");
  v11 = (_DWORD *)sub_65FEC(v14, "error");
  if ( v12 && *v12 != 6 && (!v11 || *v11 == 7) )
  {
    v16 = 1;
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v8, 0x800u, "Stratum authorisation success for pool %d", a1->__lock);
      sub_1E4EC(6, v8, 0);
    }
    a1[4].__size[3] = 1;
    byte_87894 = 1;
    if ( dword_953A8 )
    {
      v4 = dword_91F84++;
      sprintf(v10, "{\"id\": %d, \"method\": \"mining.suggest_difficulty\", \"params\": [%d]}", v4, dword_953A8);
      v5 = strlen(v10);
      sub_22CF8(a1, v10, v5);
    }
  }
  else
  {
    if ( v11 )
      v15 = (void *)sub_605A4(v11, 3);
    else
      v15 = strdup("(unknown reason)");
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v8, 0x800u, "pool %d JSON stratum auth failed: %s", a1->__lock, (const char *)v15);
      sub_1E4EC(6, v8, 0);
    }
    free(v15);
    sub_29EF4(a1);
  }
  sub_1F948(v14);
  return v16;
}
