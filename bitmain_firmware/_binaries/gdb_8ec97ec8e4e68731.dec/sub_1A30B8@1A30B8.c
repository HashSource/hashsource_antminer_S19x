void __fastcall sub_1A30B8(void **a1)
{
  _DWORD *v1; // r3

  v1 = *a1;
  if ( !*((_DWORD *)*a1 + 1) )
  {
    sub_1A2FEC(a1[1]);
    v1 = *a1;
  }
  if ( !*v1 )
    sub_1A2FEC(a1);
}
