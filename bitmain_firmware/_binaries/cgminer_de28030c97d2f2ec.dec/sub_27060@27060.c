int __fastcall sub_27060(pthread_mutex_t *a1)
{
  int v1; // r2
  size_t v2; // r0
  char v6[2048]; // [sp+14h] [bp-2918h] BYREF
  int v7; // [sp+814h] [bp-2118h] BYREF
  char v8[28]; // [sp+910h] [bp-201Ch] BYREF
  _DWORD *v9; // [sp+2910h] [bp-1Ch]
  _DWORD *v10; // [sp+2914h] [bp-18h]
  void *ptr; // [sp+2918h] [bp-14h]
  char *s1; // [sp+291Ch] [bp-10h]
  unsigned __int8 v13; // [sp+2923h] [bp-9h]
  int v14; // [sp+2924h] [bp-8h]

  v14 = 0;
  ptr = 0;
  v13 = 0;
  v1 = dword_91F84++;
  sprintf(v8, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v1);
  v2 = strlen(v8);
  if ( sub_22CF8(a1, v8, v2) )
  {
    while ( 1 )
    {
      if ( !sub_23060((int)a1, 2) )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v6, "Timed out waiting for response extranonce.subscribe");
          sub_1E4EC(7, v6, 0);
        }
        v13 = 1;
        goto LABEL_46;
      }
      ptr = sub_23428((int)a1);
      if ( !ptr )
        return v13;
      if ( !sub_26AA0(a1, (int)ptr) )
        break;
      free(ptr);
    }
    v14 = sub_64704(ptr, 0, &v7);
    free(ptr);
    v10 = (_DWORD *)sub_65FEC(v14, "result");
    v9 = (_DWORD *)sub_65FEC(v14, "error");
    if ( v10 && *v10 != 6 && (!v9 || *v9 == 7) )
    {
      v13 = 1;
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        snprintf(v6, 0x800u, "Stratum extranonce subscribe for pool %d", a1->__lock);
        sub_1E4EC(6, v6, 0);
      }
      goto LABEL_46;
    }
    if ( v9 )
    {
      s1 = (char *)sub_23B88(v9, 1u);
      if ( !s1 )
        s1 = (char *)sub_677D0(v9);
      if ( s1 && !strcmp(s1, "Method 'subscribe' not found for service 'mining.extranonce'") )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
        {
          snprintf(v6, 0x800u, "Cannot subscribe to mining.extranonce for pool %d", a1->__lock);
          sub_1E4EC(6, v6, 0);
        }
        v13 = 1;
LABEL_46:
        sub_1F948(v14);
        return v13;
      }
      if ( s1 && !strcmp(s1, "Unrecognized request provided") )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
        {
          snprintf(v6, 0x800u, "Cannot subscribe to mining.extranonce for pool %d", a1->__lock);
          sub_1E4EC(6, v6, 0);
        }
        v13 = 1;
        goto LABEL_46;
      }
      s1 = (char *)sub_605A4(v9, 3);
    }
    else
    {
      s1 = strdup("(unknown reason)");
    }
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v6, 0x800u, "Pool %d JSON extranonce subscribe failed: %s", a1->__lock, s1);
      sub_1E4EC(6, v6, 0);
    }
    free(s1);
    goto LABEL_46;
  }
  return v13;
}
