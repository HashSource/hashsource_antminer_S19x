const char ***__fastcall sub_21D618(const char ***a1, char *a2, int a3, int a4, int a5, int *a6)
{
  char *v9; // r0
  void *v11[2]; // [sp+14h] [bp-20h] BYREF
  _BYTE v12[16]; // [sp+1Ch] [bp-18h] BYREF
  void *ptr; // [sp+2Ch] [bp-8h]

  v11[0] = v12;
  v11[1] = 0;
  v12[0] = 0;
  ptr = 0;
  v9 = sub_21C8B0(a2, a5, (int *)v11);
  sub_21D250(a1, v9, 1u, a3, a4, a5, a6);
  if ( ptr )
    free(ptr);
  if ( v11[0] != v12 )
    sub_339E64(v11[0]);
  return a1;
}
