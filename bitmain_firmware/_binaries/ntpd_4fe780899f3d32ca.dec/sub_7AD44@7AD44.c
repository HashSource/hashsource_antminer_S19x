int __fastcall sub_7AD44(int a1, _DWORD *a2)
{
  int v3; // r6
  int v5[27]; // [sp+0h] [bp-70h] BYREF

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 106, 0, "file != ((void *)0)");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/unix/file.c", 107, 0, "itime != ((void *)0)");
  v3 = sub_7AC88(a1, (int)v5);
  if ( !v3 )
    sub_75E0C(a2, v5[20], 0);
  return v3;
}
