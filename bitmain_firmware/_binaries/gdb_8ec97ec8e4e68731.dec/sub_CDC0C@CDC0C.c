int __fastcall sub_CDC0C(int a1, int a2, int a3)
{
  int v3; // r8
  int v4; // r5
  int v5; // r0
  int *v6; // r4
  int v7; // r9
  int v8; // t1
  int v10; // [sp+4h] [bp-10h] BYREF
  int v11; // [sp+8h] [bp-Ch]
  int v12; // [sp+Ch] [bp-8h]
  int v13; // [sp+14h] [bp+0h]
  int v14; // [sp+18h] [bp+4h]
  int v15; // [sp+1Ch] [bp+8h]

  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = dword_4878EC;
  v14 = dword_4878F0;
  v15 = dword_4878F4;
  v3 = sub_183688(dword_4878EC);
  v4 = ps_getpid_0((int)&v10);
  if ( v4 == ps_getpid_0((int)&dword_4878EC) )
    sub_946E0("Cannot detach breakpoints of inferior_ptid");
  dword_4878EC = v10;
  dword_4878F0 = v11;
  dword_4878F4 = v12;
  if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) && (v5 = *(_DWORD *)dword_478368) != 0 )
  {
    v6 = (int *)(dword_478368 + 4);
    v7 = 0;
    do
    {
      if ( *(_DWORD *)(v5 + 48) == *(_DWORD *)(v3 + 36) && *(_DWORD *)(v5 + 12) != 3 && *(_BYTE *)(v5 + 39) )
        v7 |= ((int (*)(void))loc_C7338)();
      if ( (unsigned int)v6 >= dword_478368 + 4 * dword_47836C )
        break;
      v8 = *v6++;
      v5 = v8;
    }
    while ( v8 );
  }
  else
  {
    v7 = 0;
  }
  dword_4878EC = v13;
  dword_4878F0 = v14;
  dword_4878F4 = v15;
  return v7;
}
