void __fastcall sub_10F7C(_DWORD **a1)
{
  _DWORD *v2; // r0

  if ( !a1 )
    sub_1073C();
  v2 = *a1;
  if ( *a1 )
  {
    if ( *v2 != 1296261492 )
      sub_1073C();
    free(v2);
  }
  *a1 = 0;
}
