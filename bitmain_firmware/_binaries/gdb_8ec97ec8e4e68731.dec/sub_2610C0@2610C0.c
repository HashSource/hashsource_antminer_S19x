int __fastcall sub_2610C0(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r7
  unsigned int v8; // r5
  int v9; // r6
  int v10; // r0
  unsigned int v11; // r0

  if ( *(_DWORD *)nullsub_31(a1) != 1 )
    sub_946E0("Only values in memory can be extended with '@'.");
  if ( a2 <= 0 )
    sub_946E0("Invalid number %d of repetitions.", a2);
  v4 = sub_26BD30(a1);
  v5 = sub_26BBBC(v4, a2);
  *(_DWORD *)nullsub_31(v5) = 1;
  v6 = ((int (__fastcall *)(int))loc_26C09C)(a1);
  sub_26C178(v5, v6);
  v7 = sub_26BF68(v5);
  v8 = ((int (__fastcall *)(int))loc_26C09C)(v5);
  v9 = sub_26BCFC(v5);
  v10 = sub_26BD30(v5);
  v11 = sub_170058(v10);
  sub_260F8C(v5, 0, v7, v8, v9, v11);
  return v5;
}
