__int64 __fastcall config_group_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 1;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  *(_QWORD *)(a1 + 112) = a1 + 104;
  return a1 + 104;
}
