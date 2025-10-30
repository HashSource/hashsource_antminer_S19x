void __fastcall sub_6745C(_DWORD *a1)
{
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        sub_65268(a1);
        break;
      case 1:
        sub_65DBC((int)a1);
        break;
      case 2:
        sub_66D30((void **)a1);
        break;
      case 3:
        sub_6705C(a1);
        break;
      case 4:
        sub_672B8(a1);
        break;
      default:
        return;
    }
  }
}
