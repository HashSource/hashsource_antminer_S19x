char **__fastcall sub_1F8A40(char **a1, _DWORD *a2, int a3)
{
  int v5; // r0
  int v6; // r0
  char *v7; // r0
  char *v8; // r0
  char *v9; // r3
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v12; // [sp+8h] [bp-14h] BYREF

  v5 = sub_171258(a2);
  v6 = sub_171258(*(_DWORD **)(*(_DWORD *)(v5 + 24) + 20));
  sub_255DE4(&ptr, v6);
  v7 = sub_98E1C(a3);
  v8 = sub_93140("*(%s as *mut %s)", v7, (const char *)ptr);
  v9 = (char *)ptr;
  *a1 = v8;
  if ( v9 != &v12 )
    sub_339E64(v9);
  return a1;
}
