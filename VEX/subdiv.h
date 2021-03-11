// Function to subdivide a quad spliting it in 2

function void subdiv(vector bbmin, bbmax, cutpos; int cutDir)
{
    if (cutDir == 0)
    {
        int newprim = addprim(0, 'poly');

        vector newpos = set(bbmin);
        int newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(cutpos.x, bbmin.y, bbmin.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(cutpos.x, bbmin.y, bbmax.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmin.x, bbmin.y, bbmax.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);


        newprim = addprim(0, 'poly');

        newpos = set(bbmax);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(cutpos.x, bbmin.y, bbmax.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(cutpos.x, bbmin.y, bbmin.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmax.x, bbmin.y, bbmin.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);
    }
    else if (cutDir == 1)
    {
        int newprim = addprim(0, 'poly');

        vector newpos = set(bbmin);
        int newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmax.x, bbmin.y, bbmin.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmax.x, bbmin.y, cutpos.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmin.x, bbmin.y, cutpos.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);


        newprim = addprim(0, 'poly');

        newpos = set(bbmax);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmin.x, bbmin.y, bbmax.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmin.x, bbmin.y, cutpos.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);

        newpos = set(bbmax.x, bbmin.y, cutpos.z);
        newpt = addpoint(0, newpos);
        addvertex(0, newprim, newpt);                
    }
}

