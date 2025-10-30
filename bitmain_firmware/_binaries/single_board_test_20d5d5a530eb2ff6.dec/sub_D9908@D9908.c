int __fastcall sub_D9908(_DWORD *a1, _DWORD *a2)
{
  if ( a1[1] )
    return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))a2[1])(0, a1[2], a1[3], *a2);
  else
    return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))a2[1])(a1[3], a1[2], 0, *a2);
}
