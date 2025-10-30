int __fastcall sub_B552C(const void *a1, unsigned int a2, unsigned __int8 *a3, int *a4)
{
  unsigned int v5; // [sp+10h] [bp-14h] BYREF
  const void *v6; // [sp+14h] [bp-10h] BYREF
  int v7; // [sp+18h] [bp-Ch] BYREF
  int v8; // [sp+1Ch] [bp-8h] BYREF

  v6 = a1;
  v5 = a2;
  if ( !sub_B4C70(&v6, 0, &v5, &v7, &v8, a3, a4) || v8 )
    return -1;
  else
    return v7 | (v7 >> 31);
}
