int __fastcall sub_2A6904(int a1)
{
  _DWORD *v1; // r3
  _UNKNOWN **v2; // r12
  _DWORD *v4; // t1
  __int64 v5; // r0

  v5 = *(_QWORD *)(*(_DWORD *)(a1 + 132) + 12);
  v1 = &unk_41D3CC;
  v2 = &off_4115C0;
  while ( 1 )
  {
    if ( (_DWORD)v5 == v1[3] && (HIDWORD(v5) == v1[4] || !HIDWORD(v5) && v1[8]) )
      return v1[2] / 8;
    v1 = (_DWORD *)v1[12];
    if ( !v1 )
    {
      v4 = v2[1];
      ++v2;
      v1 = v4;
      if ( !v4 )
        break;
    }
  }
  return 1;
}
