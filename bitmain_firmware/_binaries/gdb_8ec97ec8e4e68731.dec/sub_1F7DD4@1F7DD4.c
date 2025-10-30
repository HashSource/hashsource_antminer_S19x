void __fastcall sub_1F7DD4(_DWORD *a1)
{
  ((void (__fastcall *)(_DWORD))loc_1F7AF8)(*a1);
  if ( a1[1] )
    sub_1532D4(a1 + 1);
  sub_1F7D58((void (**)(void))a1[2]);
  free(a1);
}
