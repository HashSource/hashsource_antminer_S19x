void __fastcall sub_62630(int a1, const char **a2, int a3)
{
  const char **v3; // r5
  int v5; // r7
  int v6; // r4
  const char *v7; // t1
  size_t v8; // r0
  int v9; // [sp+Ch] [bp-28h] BYREF
  char *s; // [sp+14h] [bp-20h]
  void *ptr; // [sp+18h] [bp-1Ch] BYREF
  int v12; // [sp+1Ch] [bp-18h]
  _BYTE v13[20]; // [sp+20h] [bp-14h] BYREF

  if ( a3 <= 1 )
    sub_946E0("-interpreter-exec: Usage: -interpreter-exec interp command");
  v3 = a2;
  v5 = sub_191588(dword_487668, *a2);
  if ( !v5 )
    sub_946E0("-interpreter-exec: could not find interpreter \"%s\"", *v3);
  v6 = 1;
  off_48A580 = (_UNKNOWN *)sub_60388;
  ptr = v13;
  v12 = 0;
  v13[0] = 0;
  while ( 1 )
  {
    v7 = v3[1];
    ++v3;
    sub_191810(&v9, v5, v7);
    if ( v9 < 0 )
      break;
    if ( a3 == ++v6 )
      goto LABEL_6;
  }
  v8 = strlen(s);
  sub_33BC54((int)&ptr, 0, v12, s, v8);
LABEL_6:
  off_48A580 = 0;
  if ( v12 )
    sub_946E0("%s", (const char *)ptr);
  if ( ptr != v13 )
    sub_339E64(ptr);
}
