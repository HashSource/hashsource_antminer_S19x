int __fastcall sub_2D934C(int a1, _DWORD *a2)
{
  unsigned int v2; // r3
  int v4; // r2
  int v6; // r3
  _DWORD *v8; // r6
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int (*v13)(void); // r3
  int v14; // r3
  unsigned int v15; // r3
  int v16; // r6
  int v17; // r3
  int v18; // r0
  int v19; // r6
  unsigned int v20; // r7
  int v21; // r2
  int (__fastcall *v22)(int); // r3
  int v23; // r0
  int v24; // r0
  int v25; // r3
  int v26; // r6
  int v27; // r3
  int v28; // r12
  int v29; // r10
  int v30; // r3
  int v31; // r8
  unsigned int v32; // r7
  int v33; // r9
  void *v34; // r1
  int v35; // r8
  _BYTE *v36; // r0
  unsigned int v37; // r3
  int v38; // r0

  v2 = a2[2];
  v4 = *(_DWORD *)(a1 + 4);
  if ( v2 == 9 )
    return sub_2D8D10(a1, ".note.freebsdcore.files", a2[1], a2[5], (unsigned int)a2[5]);
  if ( v2 > 9 )
  {
    if ( v2 == 17 )
      return sub_2D8D10(a1, ".note.freebsdcore.lwpinfo", a2[1], a2[5], (unsigned int)a2[5]);
    if ( v2 > 0x11 )
    {
      if ( v2 == 514 )
      {
        if ( *a2 == 8 )
          return sub_2D8D10(a1, ".reg-xstate", a2[1], a2[5], (unsigned int)a2[5]);
      }
      else if ( v2 == 1024 )
      {
        return sub_2D8D10(a1, ".reg-arm-vfp", a2[1], a2[5], (unsigned int)a2[5]);
      }
      return 1;
    }
    if ( v2 == 10 )
      return sub_2D8D10(a1, ".note.freebsdcore.vmmap", a2[1], a2[5], (unsigned int)a2[5]);
    if ( v2 == 16 )
    {
      v8 = (_DWORD *)sub_2ADB48(a1, ".auxv", (const char *)0x100);
      if ( v8 )
      {
        v9 = a2[1];
        v10 = a2[5];
        v8[21] = 0;
        v8[9] = v9 - 4;
        v8[20] = v10 + 4;
        v11 = sub_2A789C(a1);
        v6 = 1;
        v8[16] = v11 / 32 + 1;
        return v6;
      }
      return 0;
    }
  }
  else if ( v2 == 3 )
  {
    v12 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 160) + 4);
    if ( v12 == 1 )
    {
      if ( a2[1] <= 0x6Bu )
        return 0;
    }
    else if ( v12 != 2 || a2[1] <= 0x77u )
    {
      return 0;
    }
    if ( (*(int (__fastcall **)(_DWORD))(v4 + 76))(a2[4]) != 1 )
      return 0;
    v27 = *(_DWORD *)(a1 + 160);
    v28 = *(unsigned __int8 *)(v27 + 4);
    v29 = *(_DWORD *)(v27 + 2344);
    if ( v28 == 1 )
      v30 = 8;
    else
      v30 = 16;
    if ( v28 == 1 )
      v31 = 25;
    else
      v31 = 33;
    if ( v28 == 1 )
      v32 = 112;
    else
      v32 = 120;
    if ( v28 == 1 )
      v33 = 108;
    else
      v33 = 116;
    *(_DWORD *)(v29 + 12) = sub_2D8F98(a1, (void *)(a2[4] + v30), 0x11u);
    v34 = (void *)(a2[4] + v31);
    v35 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344);
    v36 = sub_2D8F98(a1, v34, 0x51u);
    v37 = a2[1];
    *(_DWORD *)(v35 + 16) = v36;
    if ( v37 >= v32 )
    {
      v38 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(a2[4] + v33);
      v6 = 1;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344) + 4) = v38;
      return v6;
    }
  }
  else if ( v2 > 3 )
  {
    if ( v2 == 7 )
    {
      if ( *a2 == 8 )
        return sub_2D8D10(a1, ".thrmisc", a2[1], a2[5], (unsigned int)a2[5]);
    }
    else if ( v2 == 8 )
    {
      return sub_2D8D10(a1, ".note.freebsdcore.proc", a2[1], a2[5], (unsigned int)a2[5]);
    }
  }
  else
  {
    if ( v2 != 1 )
    {
      if ( v2 == 2 )
        return sub_2D8D10(a1, ".reg2", a2[1], a2[5], (unsigned int)a2[5]);
      return 1;
    }
    v13 = *(int (**)(void))(*(_DWORD *)(v4 + 444) + 272);
    if ( !v13 || !v13() )
    {
      v14 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 160) + 4);
      if ( v14 == 1 )
      {
        v15 = 28;
        v16 = 8;
LABEL_31:
        if ( a2[1] >= v15 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)(a1 + 4) + 76))(a2[4]) == 1 )
        {
          v17 = *(_DWORD *)(a1 + 4);
          v18 = a2[4] + v16;
          if ( *(_BYTE *)(*(_DWORD *)(a1 + 160) + 4) == 1 )
          {
            v19 = v16 + 8;
            v20 = (*(int (__fastcall **)(int))(v17 + 76))(v18);
          }
          else
          {
            v19 = v16 + 16;
            v20 = (*(int (__fastcall **)(int))(v17 + 64))(v18);
          }
          v21 = a2[4];
          v22 = *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76);
          if ( !**(_DWORD **)(*(_DWORD *)(a1 + 160) + 2344) )
          {
            v23 = v22(v21 + v19 + 4);
            v21 = a2[4];
            v22 = *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76);
            **(_DWORD **)(*(_DWORD *)(a1 + 160) + 2344) = v23;
          }
          v24 = v22(v21 + v19 + 8);
          v25 = *(_DWORD *)(a1 + 160);
          *(_DWORD *)(*(_DWORD *)(v25 + 2344) + 8) = v24;
          v26 = *(_BYTE *)(v25 + 4) == 2 ? v19 + 16 : v19 + 12;
          if ( a2[1] - v26 >= v20 )
            return sub_2D8D10(a1, ".reg", v20, a2[5], (unsigned int)(v26 + a2[5]));
        }
        return 0;
      }
      if ( v14 == 2 )
      {
        v15 = 48;
        v16 = 16;
        goto LABEL_31;
      }
      return 0;
    }
  }
  return 1;
}
