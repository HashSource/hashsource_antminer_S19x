int __fastcall sub_23F8E4(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r1
  int v5; // r2

  v2 = a1[7];
  ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v2 + 36));
  ((void (__fastcall *)(int))loc_183698)(v2);
  result = a1[2];
  v4 = a1[3];
  v5 = a1[4];
  dword_4878F8 = -1;
  dword_4878EC = result;
  LODWORD(qword_4878F0) = v4;
  HIDWORD(qword_4878F0) = v5;
  return result;
}
