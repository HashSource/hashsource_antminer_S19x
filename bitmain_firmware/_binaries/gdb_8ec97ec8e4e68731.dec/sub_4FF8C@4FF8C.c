int __fastcall sub_4FF8C(char *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r7
  const char *v5; // r6
  size_t v6; // r0
  _BYTE *v7; // r8
  size_t v8; // r0
  int v9; // r0
  unsigned int v10; // r4
  unsigned int v11; // r3
  int result; // r0
  _DWORD *v13; // r0
  const char *v14; // r4
  const char *v15; // r0
  int v16; // [sp+8h] [bp-100h] BYREF
  const char **v17; // [sp+Ch] [bp-FCh] BYREF
  unsigned int v18; // [sp+10h] [bp-F8h]
  void *ptr; // [sp+18h] [bp-F0h] BYREF
  _BYTE v20[16]; // [sp+20h] [bp-E8h] BYREF
  _BYTE v21[108]; // [sp+30h] [bp-D8h] BYREF
  _BYTE v22[108]; // [sp+9Ch] [bp-6Ch] BYREF

  v2 = sub_243C34();
  if ( dword_46D36C )
  {
    if ( !a1 )
      a1 = "";
    sub_F64C0(v21);
    v3 = sub_F64C0(v22);
    v16 = 0;
    v4 = sub_92E28(v3);
    v5 = (const char *)((int (__fastcall *)(_BYTE *, char *, int *))loc_F5850)(v21, a1, &v16);
    if ( v21[88] )
    {
      v7 = v21;
    }
    else
    {
      v6 = strlen(a1);
      sub_F57C0(v22, v5, a1, v6);
      v7 = v22;
    }
    sub_92E40(v4);
    ptr = v20;
    sub_4FEDC(&ptr, a1, (int)v5);
    v8 = strlen(a1);
    sub_F59B4(&v17, v7, v5, v5 - a1, v8);
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v9 = sub_259858("%s%s\n", (const char *)ptr, *v17);
        v11 = v18;
      }
      else
      {
        v9 = sub_F7CDC(&v17);
        v10 = 0;
        while ( 1 )
        {
          v11 = v18;
          if ( v18 <= v10 )
            break;
          sub_259858("%s%s", (const char *)ptr, v17[++v10]);
          if ( v16 )
            sub_259858("%c", v16);
          v9 = sub_259858((const char *)&word_356638);
        }
      }
      if ( dword_46D36C == v11 )
      {
        v14 = (const char *)ptr;
        v15 = (const char *)sub_F5E94(v9);
        sub_259858("%s%s %s\n", v14, v5, v15);
      }
    }
    sub_F5D80(&v17);
    if ( ptr != v20 )
      sub_339E64(ptr);
    sub_F56B0(v22);
    return sub_F56B0(v21);
  }
  else
  {
    v13 = (_DWORD *)sub_242FDC(v2);
    result = sub_2573F0(*v13);
    if ( !result )
      return sub_259858("max-completions is zero, completion is disabled.\n");
  }
  return result;
}
