void __fastcall sub_2786B8(const char *a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5
  bool v4; // zf
  const char *v5; // r0
  int v6; // r7
  const char *v7; // [sp+4h] [bp-28h] BYREF
  void *ptr; // [sp+Ch] [bp-20h] BYREF
  void *v9; // [sp+10h] [bp-1Ch] BYREF
  char v10; // [sp+18h] [bp-14h] BYREF

  v1 = dword_487668;
  v7 = a1;
  v2 = *(_DWORD *)(dword_487668 + 36);
  v3 = dword_487668 + 36;
  *(_DWORD *)(dword_487668 + 36) = 0;
  if ( !a1 )
    sub_946E0("You must provide a filename for this command.");
  v4 = !sub_2778F8(&v7);
  v5 = v7;
  if ( v4 )
  {
    v6 = 1;
  }
  else
  {
    v5 = (const char *)sub_9360C(v7);
    v7 = v5;
    v6 = 2;
  }
  if ( !*v5 )
    sub_946E0("You must provide a filename with the raw option set.");
  if ( *v5 == 45 )
    sub_946E0("Unknown argument specified.");
  v7 = (const char *)sub_9360C(v5);
  sub_985D4(&ptr, v7);
  sub_931D8((char **)&v9, "#include \"%s\"\n", (const char *)ptr);
  sub_277AB4(0, v9, (int *)v6, 0);
  if ( v9 != &v10 )
    sub_339E64(v9);
  if ( ptr )
    free(ptr);
  if ( v3 )
    *(_DWORD *)(v1 + 36) = v2;
}
