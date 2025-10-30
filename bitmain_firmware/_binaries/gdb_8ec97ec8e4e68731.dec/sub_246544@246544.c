int __fastcall sub_246544(int (__fastcall *a1)(_DWORD, int), int a2, int a3)
{
  int v5; // r6
  ssize_t v7; // r0
  int v8; // r0
  unsigned int v9; // r0
  unsigned __int8 buf; // [sp+15h] [bp-7h] BYREF
  unsigned __int8 v12[6]; // [sp+16h] [bp-6h] BYREF

  lseek64(dword_46DCEC);
  if ( a2 >= dword_48A5A8 )
    return -1;
  while ( 1 )
  {
    sub_2464F8(&buf, 1);
    v5 = a2 + 1;
    if ( a1(buf, a3) )
      break;
    switch ( buf )
    {
      case 'R':
        lseek64(dword_46DCEC);
        a2 = v5 + dword_48A5AC;
        break;
      case 'V':
        a2 += 13;
        lseek64(dword_46DCEC);
        break;
      case 'M':
        lseek64(dword_46DCEC);
        v7 = sub_2464F8(v12, 2);
        v8 = sub_16F654(v7);
        v9 = ((int (__fastcall *)(int))loc_165BB8)(v8);
        *(_WORD *)v12 = sub_15C250(v12, 2, v9);
        lseek64(dword_46DCEC);
        a2 = *(unsigned __int16 *)v12 + 10 + v5;
        break;
      default:
        sub_946E0("Unknown block type '%c' (0x%x) in trace frame", buf, buf);
    }
    if ( dword_48A5A8 <= a2 )
      return -1;
  }
  return v5;
}
