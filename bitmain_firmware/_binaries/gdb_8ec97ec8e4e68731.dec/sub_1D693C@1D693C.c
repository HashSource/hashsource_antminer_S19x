void __fastcall sub_1D693C(int a1)
{
  int v1; // r4
  int *v2; // r0
  int *v3; // r6
  char *v4; // r0
  unsigned int v5; // r1
  const char *v6; // r2
  int v7; // r5
  int v8; // r8
  int v9; // r6
  const char *v10; // r7
  const char *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16[2]; // [sp+Ch] [bp-14h] BYREF
  _DWORD v17[3]; // [sp+14h] [bp-Ch] BYREF

  if ( dword_487D4C )
  {
    v13 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v13, "[record-btrace] info\n");
  }
  v1 = sub_23E408(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
  if ( !v1 )
    sub_946E0("No thread.");
  sub_23F788();
  v2 = (int *)sub_E1324((int *)(v1 + 252));
  v3 = v2;
  if ( !v2 )
    goto LABEL_12;
  v4 = sub_91C44(*v2);
  sub_259858("Recording format: %s.\n", v4);
  if ( *v3 == 1 )
  {
    v5 = v3[1];
    if ( v5 )
    {
LABEL_9:
      if ( (v5 & 0x3FFFFFFF) != 0 )
      {
        if ( (v5 & 0xFFFFF) != 0 )
        {
          if ( (v5 & 0x3FF) != 0 )
            LOWORD(v6) = -14408;
          else
            LOWORD(v6) = 2520;
          if ( (v5 & 0x3FF) != 0 )
          {
            HIWORD(v6) = 59;
          }
          else
          {
            v5 >>= 10;
            HIWORD(v6) = 61;
          }
        }
        else
        {
          v6 = "MB";
          v5 >>= 20;
        }
      }
      else
      {
        v6 = "GB";
        v5 >>= 30;
      }
      sub_259858("Buffer size: %u%s.\n", v5, v6);
    }
  }
  else if ( *v3 )
  {
    if ( *v3 != 2 )
    {
      v15 = (_DWORD *)sub_94700((int)"record-btrace.c", 403, "Unkown branch trace format.");
      sub_1D6B48(v15);
      return;
    }
    v5 = v3[2];
    if ( v5 )
      goto LABEL_9;
  }
LABEL_12:
  sub_E39C4(v1);
  if ( sub_E1F40(v1) )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  else
  {
    sub_E1C24(v16, v1 + 252);
    ((void (__fastcall *)(int *, int))loc_E1CE4)(v16, 1);
    v8 = sub_E1BA8(v16);
    sub_E17BC(v17, v1 + 252);
    v9 = sub_E1770(v17);
    v14 = ((int (__fastcall *)(_DWORD *))loc_E16AC)(v17);
    v7 = *(_DWORD *)(v1 + 292);
    if ( v14 )
      --v9;
  }
  v10 = (const char *)sub_240128(v1);
  v11 = (const char *)sub_23095C(*(_DWORD *)(v1 + 8), *(_DWORD *)(v1 + 12), *(_DWORD *)(v1 + 16));
  sub_259858("Recorded %u instructions in %u functions (%u gaps) for thread %s (%s).\n", v9, v8, v7, v10, v11);
  if ( sub_E1F30(v1) )
  {
    v12 = sub_E1770(*(_DWORD **)(v1 + 308));
    sub_259858("Replay in progress.  At instruction %u.\n", v12);
  }
}
