int __fastcall rand_drbg_get_nonce(int a1, int *a2, int a3, void *a4, unsigned int a5)
{
  int result; // r0
  int v8; // r1
  int *v9; // r5
  int v10; // r4
  int v11; // [sp+0h] [bp-8h] BYREF
  int v12; // [sp+4h] [bp-4h] BYREF

  v11 = 0;
  v12 = 0;
  result = sub_F3F4C(0, 0, a4, a5);
  v9 = (int *)result;
  if ( result )
  {
    if ( sub_F4F74(result, v8)
      && (((void (__fastcall *)(void *, int, int *, int, int))sub_10C5EC)(&unk_6E1AE4, 1, &v12, dword_6E1AD4, a1),
          sub_F42B8(v9, (char *)&v11, 8u, 0)) )
    {
      v10 = sub_F40E4((int)v9);
      *a2 = sub_F40E8(v9);
    }
    else
    {
      v10 = 0;
    }
    sub_F408C(v9);
    return v10;
  }
  return result;
}
