bool __fastcall sub_15CD58(int a1, int a2, int a3, int a4, int a5)
{
  _BOOL4 v5; // r5
  _DWORD *v6; // r0
  int v7; // r0
  int *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int varg_r0; // [sp+18h] [bp+Ch] BYREF
  int varg_r1; // [sp+1Ch] [bp+10h]
  int varg_r2; // [sp+20h] [bp+14h]
  int varg_r3; // [sp+24h] [bp+18h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v5 = (a4 & 7) != 0;
  if ( (a4 & 7) == 0 )
  {
    a1 = memcmp(&varg_r0, &unk_3A9238, 0x14u);
    if ( !a1 )
      v5 = 1;
  }
  if ( dword_487724 )
  {
    v6 = (_DWORD *)sub_242FC8(a1);
    v7 = sub_2594B0(*v6, "{ frame_id_p (l=");
    v8 = (int *)sub_242FC8(v7);
    v9 = sub_15C6C8(*v8, varg_r0, varg_r1, varg_r2, varg_r3, a5);
    v10 = (_DWORD *)sub_242FC8(v9);
    sub_2594B0(*v10, ") -> %d }\n", v5);
  }
  return v5;
}
