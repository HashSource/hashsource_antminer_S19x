void __fastcall sub_11474(_DWORD **a1)
{
  _DWORD *v2; // r0

  if ( !a1 )
    sub_10C38();
  v2 = *a1;
  if ( *a1 )
  {
    if ( *v2 != 1296261492 )
      sub_10C38();
    free(v2);
  }
  *a1 = 0;
}
