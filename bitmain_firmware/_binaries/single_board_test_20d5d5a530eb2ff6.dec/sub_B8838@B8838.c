int __fastcall sub_B8838(int result, int a2)
{
  int *v3; // r4
  void *v4; // r6
  int v5; // r2
  int v6; // r0
  int v7; // r1

  if ( *(_DWORD *)(result + 8) >= a2 )
    return result;
  v3 = (int *)result;
  if ( a2 >= 0x800000 )
  {
    sub_D0048(3, 120, 114, "crypto/bn/bn_lib.c", 270);
    return 0;
  }
  if ( sub_B87C0(result, 2) )
  {
    sub_D0048(3, 120, 105, "crypto/bn/bn_lib.c", 274);
    return 0;
  }
  if ( sub_B87C0((int)v3, 8) )
    v4 = (void *)sub_E180C(4 * a2, "crypto/bn/bn_lib.c", 278);
  else
    v4 = (void *)sub_E0740(4 * a2, "crypto/bn/bn_lib.c", 280);
  if ( !v4 )
  {
    sub_D0048(3, 120, 65, "crypto/bn/bn_lib.c", 282);
    return 0;
  }
  v5 = v3[1];
  if ( v5 > 0 )
    memcpy(v4, (const void *)*v3, 4 * v5);
  if ( *v3 )
  {
    v6 = sub_B87C0((int)v3, 8);
    v7 = v3[2];
    if ( v6 )
      ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(*v3, 4 * v7, "crypto/bn/bn_lib.c", 204);
    else
      sub_E0758(*v3, 4 * v7, (size_t)"crypto/bn/bn_lib.c");
  }
  *v3 = (int)v4;
  v3[2] = a2;
  return (int)v3;
}
