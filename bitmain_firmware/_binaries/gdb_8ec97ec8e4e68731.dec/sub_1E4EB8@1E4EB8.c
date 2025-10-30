int __fastcall sub_1E4EB8(char **a1, size_t *a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r4
  int v8; // r0
  int v9; // r11
  char *v10; // r3
  int v11; // r5
  int v12; // r0
  bool v13; // zf
  int v14; // r10
  int v16; // r0
  int v17; // r10
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  int v21; // r0
  int v22; // r2
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  int v28; // r0
  void *ptr; // [sp+10h] [bp-1Ch] BYREF
  unsigned int v32; // [sp+14h] [bp-18h]
  _BYTE v33[20]; // [sp+18h] [bp-14h] BYREF

  v5 = a3;
  v8 = sub_16F654((int)a1);
  ((void (__fastcall *)(int))loc_1E2770)(v8);
  v9 = dword_488C94;
  *(_DWORD *)(dword_488C94 + 16) = 0;
  v10 = *a1;
  strcpy(*a1, "timeout");
  if ( v5 )
  {
    v5 = dword_487AA0;
    if ( dword_487AA0 <= 0 )
      v5 = -1;
  }
  else
  {
    if ( a4 )
      v5 = a3;
    else
      LOWORD(v10) = -8984;
    if ( !a4 )
    {
      HIWORD(v10) = 70;
      v5 = *(_DWORD *)v10;
    }
  }
LABEL_4:
  v11 = 3;
  while ( 1 )
  {
    v12 = sub_1E4AF8(v5);
    v13 = v12 == -2;
    if ( v12 != -2 )
      v13 = v12 == 36;
    if ( v13 )
      break;
    if ( v12 == 37 )
    {
      v16 = sub_1E4BA0((const char **)a1, a2);
      if ( v16 >= 0 )
      {
        v17 = v16;
        if ( dword_48A590 )
        {
          v19 = sub_1E1578(&ptr, (int)*a1, v16);
          v20 = (_DWORD *)sub_242FC8(v19);
          sub_2594B0(*v20, "  Notification received: %s\n", (const char *)ptr);
          if ( ptr != v33 )
            sub_339E64(ptr);
        }
        if ( a5 )
          *a5 = 1;
        sub_1F7C60(*(_DWORD *)(v9 + 408));
        if ( a4 )
          return v17;
        goto LABEL_4;
      }
LABEL_15:
      sub_1E49A0((int)&word_3C1464, 1);
      if ( !--v11 )
      {
        sub_259858("Ignoring packet error, continuing...\n");
        if ( *(_DWORD *)(v9 + 20) )
          return -1;
        v14 = -1;
        sub_1E49A0((int)"+", 1);
        return v14;
      }
    }
  }
  if ( v12 != -2 )
  {
    v21 = sub_1E4BA0((const char **)a1, a2);
    if ( v21 >= 0 )
    {
      v14 = v21;
      if ( dword_48A590 )
      {
        if ( v21 >= 512 )
          v22 = 512;
        else
          v22 = v21;
        v23 = sub_1E1578(&ptr, (int)*a1, v22);
        v24 = (_DWORD *)sub_242FC8(v23);
        v25 = sub_2594B0(*v24, "Packet received: %s", (const char *)ptr);
        if ( v32 > 0x200 )
        {
          v26 = (_DWORD *)sub_242FC8(v25);
          v25 = sub_2594B0(*v26, "[%zu bytes omitted]", v32 - 512);
        }
        v27 = (_DWORD *)sub_242FC8(v25);
        sub_2594B0(*v27, (const char *)&word_356638);
        if ( ptr != v33 )
          sub_339E64(ptr);
      }
      if ( !*(_DWORD *)(v9 + 20) )
        sub_1E49A0((int)"+", 1);
      if ( a5 )
      {
        *a5 = 0;
        return v14;
      }
      return v14;
    }
    goto LABEL_15;
  }
  if ( a4 )
    return -1;
  if ( !a3 )
  {
    if ( dword_48A590 )
    {
      v18 = (_DWORD *)sub_242FC8(-2);
      sub_25A6BC("Timed out.\n", *v18);
    }
    goto LABEL_15;
  }
  sub_231E3C(2);
  v28 = sub_92F64(12, "Watchdog timeout has expired.  Target detached.");
  return sub_1E51C4(v28);
}
