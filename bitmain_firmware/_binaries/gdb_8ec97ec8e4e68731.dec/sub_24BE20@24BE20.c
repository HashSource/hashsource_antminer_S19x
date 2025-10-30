int __fastcall sub_24BE20(char *s, int a2)
{
  char *v4; // r7
  int v5; // r7
  __int64 v6; // r2
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v9[20]; // [sp+10h] [bp-14h] BYREF

  if ( dword_48A8D0 )
    sub_248B08(&dword_48A8C8);
  if ( !s || !*s )
    return sub_259F10("Usage: tfind range <startaddr>,<endaddr>\n");
  v4 = strchr(s, 44);
  if ( v4 )
  {
    ptr = v9;
    sub_248B24(&ptr, s, (int)v4);
    v5 = sub_9360C(v4 + 1);
    dword_48A91C = sub_14CB9C((int)ptr);
    HIDWORD(v6) = sub_14CB9C(v5);
    dword_48A920 = HIDWORD(v6);
    if ( ptr != v9 )
    {
      sub_339E64(ptr);
      HIDWORD(v6) = dword_48A920;
    }
    LODWORD(v6) = dword_48A91C;
  }
  else
  {
    LODWORD(v6) = sub_14CB9C((int)s);
    HIDWORD(v6) = v6 + 1;
    *(_QWORD *)&dword_48A91C = v6;
  }
  return sub_24B678(3, 0, v6, SHIDWORD(v6), a2);
}
