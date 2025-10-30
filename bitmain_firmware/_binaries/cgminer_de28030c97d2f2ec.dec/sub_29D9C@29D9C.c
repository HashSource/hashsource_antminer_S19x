char *__fastcall sub_29D9C(int a1)
{
  bool v1; // r3
  char *s1; // [sp+8h] [bp-1Ch]
  _DWORD *v4; // [sp+Ch] [bp-18h]
  int v5; // [sp+10h] [bp-14h]
  _DWORD *v6; // [sp+14h] [bp-10h]
  int i; // [sp+18h] [bp-Ch]
  int v8; // [sp+1Ch] [bp-8h]

  v8 = 0;
  v6 = (_DWORD *)sub_66B80(a1, 0);
  if ( v6 && *v6 == 1 )
  {
    v5 = sub_66B34(v6);
    for ( i = 0; i < v5; ++i )
    {
      v4 = (_DWORD *)sub_66B80(v6, i);
      v1 = !v4 || *v4 != 1;
      if ( v4 == 0 || v1 )
        break;
      s1 = (char *)sub_23B88(v4, 0);
      if ( s1 && !strncasecmp(s1, "mining.notify", 0xDu) )
        return sub_23C50(v4, 1u);
    }
  }
  return (char *)v8;
}
