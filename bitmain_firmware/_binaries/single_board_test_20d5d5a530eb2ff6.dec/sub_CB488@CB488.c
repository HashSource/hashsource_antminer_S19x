bool __fastcall sub_CB488(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // r11
  int v9; // r10
  int v10; // r0
  int v11; // r6
  _BOOL4 v12; // r5
  int v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]
  int v17; // [sp+18h] [bp-Ch]

  sub_130BC0(a5);
  v8 = sub_130CCC(a5);
  v16 = sub_130CCC(a5);
  v17 = sub_130CCC(a5);
  v14 = sub_130CCC(a5);
  v9 = sub_130CCC(a5);
  v15 = sub_130CCC(a5);
  v10 = sub_130CCC(a5);
  v12 = v10
     && (v11 = v10,
         (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(
           a1,
           v10,
           *(_DWORD *)(a2 + 8),
           *(_DWORD *)(a3 + 8),
           a5))
     && (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(
          a1,
          v8,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a3 + 16),
          a5)
     && (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(
          a1,
          v9,
          *(_DWORD *)(a2 + 8),
          *(_DWORD *)(a3 + 16),
          a5)
     && (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(
          a1,
          v14,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a3 + 8),
          a5)
     && (*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, v15, a1[17], v8, a5)
     && sub_133AF8(v15, v11, v15, a1[10])
     && sub_133AF8(v11, v14, v9, a1[10])
     && (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v15, v11, v15, a5)
     && (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v8, v8, a5)
     && sub_134010(v17, a1[18], 2, a1[10])
     && (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v8, v17, v8, a5)
     && sub_133FE4(v15, v15, a1[10])
     && sub_133F18(v14, v9, v14, a1[10])
     && (*(int (__fastcall **)(_DWORD *, _DWORD, int, int))(*a1 + 140))(a1, *(_DWORD *)(a3 + 16), v14, a5)
     && (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(
          a1,
          v9,
          *(_DWORD *)(a3 + 16),
          *(_DWORD *)(a4 + 8),
          a5)
     && sub_133AF8(v8, v8, v15, a1[10])
     && sub_133F18(*(_DWORD *)(a3 + 8), v8, v9, a1[10])
     && (*(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 140))(a1, v9, *(_DWORD *)(a2 + 8), a5)
     && (*(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 140))(a1, v15, *(_DWORD *)(a2 + 16), a5)
     && (*(int (__fastcall **)(_DWORD *, int, int, _DWORD, int))(*a1 + 136))(a1, v11, v15, a1[17], a5)
     && sub_133AF8(v16, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 16), a1[10])
     && (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v16, v16, a5)
     && sub_133F18(v16, v16, v9, a1[10])
     && sub_133F18(v16, v16, v15, a1[10])
     && sub_133F18(v14, v9, v11, a1[10])
     && (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v14, v14, a5)
     && (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v8, v15, v16, a5)
     && (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v8, v17, v8, a5)
     && sub_133F18(*(_DWORD *)(a2 + 8), v14, v8, a1[10])
     && sub_133AF8(v14, v9, v11, a1[10])
     && (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v9, v15, a5)
     && (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v9, v9, v17, a5)
     && (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136))(a1, v16, v16, v14, a5)
     && sub_133FE4(v16, v16, a1[10])
     && sub_133AF8(*(_DWORD *)(a2 + 16), v9, v16, a1[10]) != 0;
  sub_130C74(a5);
  return v12;
}
