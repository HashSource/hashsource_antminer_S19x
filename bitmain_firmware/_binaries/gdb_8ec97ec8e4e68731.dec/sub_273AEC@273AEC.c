int __fastcall sub_273AEC(_BYTE *a1, __int64 *a2)
{
  __int64 v3; // r0
  int v4; // r3
  _BYTE *v6; // [sp+4h] [bp-Ch] BYREF

  if ( !*a1 )
    return -1;
  v3 = sub_9335C((int)a1, &v6, 0);
  v4 = (unsigned __int8)*v6;
  if ( *v6 )
    return -1;
  *a2 = v3;
  return v4;
}
