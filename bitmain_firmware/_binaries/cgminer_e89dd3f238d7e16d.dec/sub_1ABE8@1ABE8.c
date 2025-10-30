int __fastcall sub_1ABE8(int *a1, int a2)
{
  int v3; // r0
  const char *v4; // r0
  int v5; // r0
  unsigned int v6; // r2
  char s[16]; // [sp+10h] [bp-13Ch] BYREF
  _BYTE v10[252]; // [sp+20h] [bp-12Ch] BYREF
  void *ptr; // [sp+11Ch] [bp-30h]
  int v12; // [sp+120h] [bp-2Ch]
  int v13; // [sp+124h] [bp-28h]
  _DWORD *v14; // [sp+128h] [bp-24h]
  _DWORD *v15; // [sp+12Ch] [bp-20h]
  _DWORD *v16; // [sp+130h] [bp-1Ch]
  _DWORD *v17; // [sp+134h] [bp-18h]
  int v18; // [sp+138h] [bp-14h]
  int v19; // [sp+13Ch] [bp-10h]
  unsigned int v20; // [sp+140h] [bp-Ch]
  int i; // [sp+144h] [bp-8h]

  v18 = 0;
  i = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  memset(s, 0, sizeof(s));
  v19 = 0;
  ptr = 0;
  v17 = (_DWORD *)sub_639D0(a2, 0, v10);
  if ( !v17 || *v17 )
    return -2147483645;
  v16 = (_DWORD *)sub_652F0(v17, "command");
  if ( v16 && *v16 == 1 )
  {
    v3 = sub_652F0(v17, "new_api");
    v15 = (_DWORD *)v3;
    v20 = !v3 || *v15 != 5;
    v13 = sub_651D4(v3);
    for ( i = 0; ; ++i )
    {
      v6 = sub_65E3C(v16);
      if ( v6 <= i )
        break;
      v14 = (_DWORD *)sub_65E88(v16, i);
      if ( !v14 || i > 10 )
        break;
      if ( *v14 == 2 )
      {
        memset(s, 0, sizeof(s));
        v4 = (const char *)sub_66AE0(v14);
        snprintf(s, 0x10u, "%s", v4);
        v5 = strcmp(s, "reload");
        if ( v5 || v20 )
        {
          v12 = sub_651D4(v5);
          sub_1A278(v12, s, v20);
          sub_65420(v13, s, v12);
        }
        else
        {
          v19 = 1;
        }
      }
    }
    ptr = (void *)sub_5F850(v13, 24576);
    sub_19DF0(a1, (char *)ptr);
    free(ptr);
    if ( v19 == 1 )
      sub_1A278(v13, "reload", 0);
    sub_12B40(v13);
    sub_12B40((int)v17);
    return v18;
  }
  else
  {
    sub_12B40((int)v17);
    return -2147483645;
  }
}
