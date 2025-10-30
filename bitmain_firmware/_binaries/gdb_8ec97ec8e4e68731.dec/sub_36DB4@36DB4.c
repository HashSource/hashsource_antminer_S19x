int __fastcall sub_36DB4(int a1, char a2)
{
  int v4; // r0
  int *v6; // r7
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r10
  int v15; // r11
  int v16; // r0
  int v17; // r12
  char v18; // lr
  int v19; // r2
  int v20; // r11
  int v21; // r12
  int v22; // r2
  char v23; // lr
  int v24; // r0
  int v25; // r3
  char v26; // r12
  int v27; // r8
  int v28; // r1
  int v29; // r0
  int v30; // r5
  int v31; // r5
  int v32; // r5
  int v33; // r5
  int v34; // r5
  int v35; // r5
  int v36; // r5
  int v37; // r4
  int v38; // r9
  int v39; // [sp+4h] [bp-18h]
  int v40; // [sp+8h] [bp-14h]
  int v41; // [sp+Ch] [bp-10h]
  int v42; // [sp+10h] [bp-Ch]
  int v43; // [sp+14h] [bp-8h]

  v4 = ((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_471B90);
  if ( *(_DWORD *)v4 )
    return *(_DWORD *)v4;
  v6 = (int *)v4;
  v7 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v8 = sub_1773C4(a1, v7, 0, "int");
  v9 = ((int (__fastcall *)(int))loc_165E68)(a1);
  v10 = sub_1773C4(a1, v9, 1, "unsigned int");
  v11 = ((int (__fastcall *)(int))loc_165EE0)(a1);
  v39 = sub_1773C4(a1, v11, 0, "long");
  v12 = ((int (__fastcall *)(int))loc_165EE0)(a1);
  v43 = sub_1773C4(a1, v12, 0, "short");
  v13 = (_DWORD *)sub_1780B4(a1);
  v41 = sub_1700C0(*v13);
  v14 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 4);
  v15 = *(_DWORD *)(v14 + 24);
  *(_DWORD *)(v15 + 8) = sub_327254("sigval_t");
  sub_1780AC(v14, "sival_int", v8);
  sub_1780AC(v14, "sival_ptr", v41);
  v16 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 23, 8 * *(_DWORD *)(v8 + 20), "__pid_t");
  v17 = *(_DWORD *)(v16 + 24);
  v40 = v16;
  v18 = *(_BYTE *)(v17 + 1);
  v19 = 8 * *(_DWORD *)(v10 + 20);
  *(_DWORD *)(v17 + 20) = v8;
  *(_BYTE *)(v17 + 1) = v18 | 8;
  v20 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 23, v19, "__uid_t");
  v21 = *(_DWORD *)(v20 + 24);
  v22 = *(_DWORD *)(v39 + 20);
  v23 = *(_BYTE *)(v21 + 1);
  *(_DWORD *)(v21 + 20) = v10;
  *(_BYTE *)(v21 + 1) = v23 | 8;
  v24 = ((int (__fastcall *)(int, int, int, const char *))loc_177328)(a1, 23, 8 * v22, "__clock_t");
  v25 = *(_DWORD *)(v24 + 24);
  v42 = v24;
  v26 = *(_BYTE *)(v25 + 1);
  *(_DWORD *)(v25 + 20) = v39;
  *(_BYTE *)(v25 + 1) = v26 | 8;
  v27 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 4);
  ((void (__fastcall *)(int))loc_165E68)(a1);
  if ( ((int (__fastcall *)(int))loc_1665F4)(a1) == 64 )
    v28 = sub_347690(128) - 4;
  else
    v28 = sub_347690(128) - 3;
  v29 = sub_1721F4(v8, v28);
  sub_1780AC(v27, "_pad", v29);
  v30 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
  sub_1780AC(v30, "si_pid", v40);
  sub_1780AC(v30, "si_uid", v20);
  sub_1780AC(v27, "_kill", v30);
  v31 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
  sub_1780AC(v31, "si_tid", v8);
  sub_1780AC(v31, "si_overrun", v8);
  sub_1780AC(v31, "si_sigval", v14);
  sub_1780AC(v27, "_timer", v31);
  v32 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
  sub_1780AC(v32, "si_pid", v40);
  sub_1780AC(v32, "si_uid", v20);
  sub_1780AC(v32, "si_sigval", v14);
  sub_1780AC(v27, "_rt", v32);
  v33 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
  sub_1780AC(v33, "si_pid", v40);
  sub_1780AC(v33, "si_uid", v20);
  sub_1780AC(v33, "si_status", v8);
  sub_1780AC(v33, "si_utime", v42);
  sub_1780AC(v33, "si_stime", v42);
  sub_1780AC(v27, "_sigchld", v33);
  v34 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
  sub_1780AC(v34, "si_addr", v41);
  if ( (a2 & 1) != 0 )
  {
    sub_1780AC(v34, "_addr_lsb", v43);
    v38 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
    sub_1780AC(v38, "_lower", v41);
    sub_1780AC(v38, "_upper", v41);
    sub_1780AC(v34, "_addr_bnd", v38);
  }
  sub_1780AC(v27, "_sigfault", v34);
  v35 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
  sub_1780AC(v35, "si_band", v39);
  sub_1780AC(v35, "si_fd", v8);
  sub_1780AC(v27, "_sigpoll", v35);
  v36 = ((int (__fastcall *)(int, _DWORD, int))loc_177EC8)(a1, 0, 3);
  v37 = *(_DWORD *)(v36 + 24);
  *(_DWORD *)(v37 + 8) = sub_327254("siginfo");
  sub_1780AC(v36, "si_signo", v8);
  sub_1780AC(v36, "si_errno", v8);
  sub_1780AC(v36, "si_code", v8);
  sub_177FD4(v36, "_sifields", v27, *(_DWORD *)(v39 + 20));
  *v6 = v36;
  return v36;
}
