void __fastcall sub_5571C(const char *a1, char *a2, const char *a3)
{
  __int64 v4; // r0
  const char *v6; // r4
  unsigned int v7; // r5
  unsigned int v8; // r0
  size_t v9; // r4
  void *src; // r6
  int v11; // r3
  int v12; // [sp+4h] [bp-20h]
  const char *v13; // [sp+14h] [bp-10h] BYREF
  void *v14; // [sp+18h] [bp-Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-8h] BYREF

  v13 = a1;
  LODWORD(v4) = &v14;
  HIDWORD(v4) = &v13;
  sub_553F0(v4);
  if ( !v13 || !*v13 )
    sub_946E0("Missing start address.");
  sub_556A8((int *)&ptr, &v13);
  v6 = v13;
  if ( !v13 || !*v13 )
    sub_946E0("Missing stop address.");
  v7 = sub_14CB9C(ptr);
  v8 = sub_14CB9C(v6);
  if ( v7 >= v8 )
    sub_946E0("Invalid memory address range (start >= end).");
  v9 = v8 - v7;
  src = (void *)sub_9836C(v8 - v7);
  sub_FA844(v7, src, v9);
  if ( !strcmp(a3, "binary") )
    sub_54EE4((int)v14, a2, src, v11, v9);
  else
    sub_54F58((const char *)v14, a2, (int)a3, v7, src, v12, v9);
  sub_339E64(src);
  if ( ptr )
    free(ptr);
  if ( v14 )
    free(v14);
}
