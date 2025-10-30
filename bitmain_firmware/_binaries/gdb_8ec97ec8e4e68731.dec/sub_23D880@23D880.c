__int64 __fastcall sub_23D880(int a1, int a2)
{
  int v2; // r3
  __int64 v3; // r4
  int v4; // r0
  int v5; // r1

  v2 = dword_48A4D4;
  if ( dword_48A4D4 )
  {
    while ( *(_DWORD *)(v2 + 8) != dword_4878EC || qword_4878F0 != *(_QWORD *)(v2 + 12) )
    {
      v2 = *(_DWORD *)(v2 + 4);
      if ( !v2 )
        goto LABEL_8;
    }
    if ( a2 )
      v3 = *(int *)(v2 + 20);
    else
      v3 = *(int *)(v2 + 24);
  }
  else
  {
LABEL_8:
    v3 = 0;
  }
  sub_1780B4();
  return sub_26DAF4(*(_DWORD *)(v4 + 12), v5, v3, HIDWORD(v3));
}
