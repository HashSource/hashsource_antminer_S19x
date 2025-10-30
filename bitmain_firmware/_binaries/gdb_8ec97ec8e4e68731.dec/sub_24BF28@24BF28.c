int __fastcall sub_24BF28(char *s, int a2)
{
  char *v4; // r6
  int v5; // r6
  int v6; // r4
  int v7; // r6
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v10[20]; // [sp+10h] [bp-14h] BYREF

  if ( dword_48A8D0 && !dword_48A8C8 )
    sub_946E0("May not look at trace frames while trace is running.");
  if ( !s || !*s )
    return sub_259F10("Usage: tfind outside <startaddr>,<endaddr>\n");
  v4 = strchr(s, 44);
  if ( v4 )
  {
    ptr = v10;
    sub_248B24(&ptr, s, (int)v4);
    v5 = sub_9360C(v4 + 1);
    v6 = sub_14CB9C((int)ptr);
    v7 = sub_14CB9C(v5);
    if ( ptr != v10 )
      sub_339E64(ptr);
  }
  else
  {
    v6 = sub_14CB9C((int)s);
    v7 = v6 + 1;
  }
  return sub_24B678(4, 0, v6, v7, a2);
}
