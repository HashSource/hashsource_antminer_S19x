int __fastcall sub_467E4(_DWORD *a1, char *a2, int a3)
{
  int v5; // r0
  unsigned __int8 *v6; // r4
  int result; // r0
  unsigned __int8 *v8; // [sp+0h] [bp-Ch] BYREF

  v5 = sub_463FC(a1, a2, 0);
  if ( v5 == -1 )
    return a3;
  v6 = (unsigned __int8 *)(*a1 + a1[5 * v5 + 3]);
  if ( !v6 )
    return a3;
  result = sub_44D48(v6, &v8);
  if ( v6 == v8 || *v8 )
    return a3;
  return result;
}
