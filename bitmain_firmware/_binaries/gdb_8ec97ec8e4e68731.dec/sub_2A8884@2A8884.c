int __fastcall sub_2A8884(int a1, int a2, int a3)
{
  int v4; // r4
  int v6; // r0
  int v7; // r1

  v4 = *(_DWORD *)(a3 + 12);
  if ( !v4 )
  {
    v7 = 0;
    goto LABEL_5;
  }
  v6 = (*(int (__fastcall **)(int, int, int, _DWORD))(v4 + 4))(a3, a1, a2, 0);
  v4 = v6;
  if ( v6 != -1 )
  {
    v7 = v6;
LABEL_5:
    *(_QWORD *)(a3 + 24) += (unsigned int)v7;
  }
  if ( a2 != v4 )
  {
    *_errno_location() = 28;
    ((void (__fastcall *)(int))loc_2A6C48)(1);
  }
  return v4;
}
