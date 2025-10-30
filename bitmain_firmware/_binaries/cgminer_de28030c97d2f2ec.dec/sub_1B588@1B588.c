int __fastcall sub_1B588(int *a1, int a2)
{
  int v3; // r0
  const char *v4; // r0
  int v5; // r0
  unsigned int v6; // r4
  char s[16]; // [sp+10h] [bp-144h] BYREF
  _BYTE v10[252]; // [sp+20h] [bp-134h] BYREF
  void *ptr; // [sp+11Ch] [bp-38h]
  int v12; // [sp+120h] [bp-34h]
  int v13; // [sp+124h] [bp-30h]
  _DWORD *v14; // [sp+128h] [bp-2Ch]
  _DWORD *v15; // [sp+12Ch] [bp-28h]
  _DWORD *v16; // [sp+130h] [bp-24h]
  _DWORD *v17; // [sp+134h] [bp-20h]
  int v18; // [sp+138h] [bp-1Ch]
  int v19; // [sp+13Ch] [bp-18h]
  unsigned int v20; // [sp+140h] [bp-14h]
  int i; // [sp+144h] [bp-10h]

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
  v17 = (_DWORD *)sub_64704(a2, 0, v10);
  if ( !v17 || *v17 )
    return -2147483645;
  v16 = (_DWORD *)sub_65FEC(v17, "command");
  if ( v16 && *v16 == 1 )
  {
    v3 = sub_65FEC(v17, "new_api");
    v15 = (_DWORD *)v3;
    v20 = !v3 || *v15 != 5;
    v13 = sub_65ED4(v3);
    for ( i = 0; ; ++i )
    {
      v6 = i;
      if ( v6 >= sub_66B34(v16) )
        break;
      v14 = (_DWORD *)sub_66B80(v16, i);
      if ( !v14 || i > 10 )
        break;
      if ( *v14 == 2 )
      {
        memset(s, 0, sizeof(s));
        v4 = (const char *)sub_677D0(v14);
        snprintf(s, 0x10u, "%s", v4);
        v5 = strcmp(s, "reload");
        if ( v5 || v20 )
        {
          v12 = sub_65ED4(v5);
          sub_1AC28(v12, s, v20);
          sub_6611C(v13, s, v12);
        }
        else
        {
          v19 = 1;
        }
      }
    }
    ptr = (void *)sub_605A4(v13, 24576);
    sub_1A7A4(a1, (char *)ptr);
    free(ptr);
    if ( v19 == 1 )
      sub_1AC28(v13, "reload", 0);
    sub_13310(v13);
    sub_13310((int)v17);
    return v18;
  }
  else
  {
    sub_13310((int)v17);
    return -2147483645;
  }
}
