int __fastcall sub_1E370(int result, _QWORD *a2, _QWORD *a3)
{
  int v3; // [sp+14h] [bp-8h]

  v3 = *(_DWORD *)(result + 24);
  if ( v3 )
  {
    *a2 = *(_QWORD *)(v3 + 16);
    *a3 = *(_QWORD *)(v3 + 24);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  return result;
}
