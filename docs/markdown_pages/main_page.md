@mainpage Test

__Introduction__

\htmlonly

<script type="module" src="https://unpkg.com/@google/model-viewer/dist/model-viewer.min.js"></script>

<model-viewer src="model.glb" ar ar-modes="webxr scene-viewer quick-look" camera-controls poster="poster_monkey.png" shadow-intensity="1" environment-image="spruit_sunrise_1k_HDR.hdr" min-camera-orbit="auto 20deg auto" max-camera-orbit="auto 90deg auto" style="width:100%;height:auto;">
    <div class="progress-bar hide" slot="progress-bar">
        <div class="update-bar"></div>
    </div>
    <button slot="ar-button" style="background-color: white; border-radius: 4px; border: none; position: relative; top: 16px; right: 16px; ">
        👋 Activate AR
    </button>
</model-viewer>


\endhtmlonly
